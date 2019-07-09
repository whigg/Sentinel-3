# Sentinel-3

SRAL-WAT

file downloading:
Interactive:
https://catalogue.onda-dias.eu/catalogue/

API:
https://www.onda-dias.eu/cms/wp-content/uploads/2019/06/Catalogue-Open-Data-Protocol-User-Guide.pdf

One example:
wget --user=yaoyu.9404@gmail.com --password=Eequals271828.. --content-disposition 'https://catalogue.onda-dias.eu/dias-catalogue/Products(e39c2006-8f38-483e-a556-d34106b8f020)/$value'


searching S3A SRAL level-2 WAT files:
search cycle number (10, for example), orbit direction
https://catalogue.onda-dias.eu/dias-catalogue/Products?$search="name:S3A_SR_2_WAT__*,%20lastOrbitDirection:DESCENDING,%20cycleNumber:10"

Count the number of matching products:
https://catalogue.onda-dias.eu/dias-catalogue/Products/$count?$search="name:S3A_SR_2_WAT__*,%20lastOrbitDirection:DESCENDING,%20cycleNumber:10"
S3A_SR_2_WAT__*: 20858
S3B_SR_2_WAT__*: 11260


use wget to download a single .zip file with known id:

wget --user=yaoyu.9404@gmail.com --password=Eequals271828.. --content-disposition 'https://catalogue.onda-dias.eu/dias-catalogue/Products(e39c2006-8f38-483e-a556-d34106b8f020)/$value'



get the id then save them in a file:

https://catalogue.onda-dias.eu/dias-catalogue/Products?$top=2000&$select=id&$search="name:S3A_SR_2_WAT__*"

https://catalogue.onda-dias.eu/dias-catalogue/Products?$top=2000&$select=id&$search="name:S3B_SR_2_WAT__*"

https://catalogue.onda-dias.eu/dias-catalogue/Products?$skip=2000&$top=2000&$select=id&$search="name:S3A_SR_2_WAT__*"



download_S3B.sh
***********************************************************

file="S3A_2000"
# extract id and print to file:
rm id.txt
sed 's/(/ /g' $file | sed 's/)/ /g' | awk '{ for (i = 2; i <= NF; i += 2) print $i > "id.txt"}'
# creat download links:
rm download.com
file2="id.txt"
I="wget --user=yaoyu.9404@gmail.com --password=Eequals271828.. --content-disposition 'https://catalogue.onda-dias.eu/dias-catalogue/Products("
E=")/\$value'"
while IFS= read -r line
do
        printf "$I$line$E\n" >> "download.com"

done < "$file2"
#
# execute 
chmod +x download.com
./download.com
# ./download.com >& log &
*************************************************************




# searching by sensing date
https://catalogue.onda-dias.eu/dias-catalogue/Products/$count?$search="beginPosition:[2016-02-01T00:00:00.000Z%20TO%202018-06-01T00:00:00.000Z], name:S3A_SR_2_WAT__*"

https://catalogue.onda-dias.eu/dias-catalogue/Products?$top=2000&$select=id&$search="name:S3A_SR_2_WAT__*"



