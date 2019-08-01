/**************************************************************************************************
 * 12/01/2008 Eric Leuliette
 * NOAA Laboratory for Satellite Altimetry
 *
 * EXPORT NOTICE:
 * This software is subject to U.S. export control laws and regulations.
 * (22 C. F. R. 120-130 and 15 C. F. R. 730-774). To the extent that the
 * software is subject to U.S. export control laws and regulations, the 
 * recipient has the responsibility to obtain export licenses or other
 * export authority as may be required before exporting such information
 * to foreign countries or providing access to foreign nationals.
 ***************************************************************************************************/

#define attlen 1024
#define meas_ind 20
#define wvf_ind 104
#define pass_len 3600

typedef struct {
    char Conventions[attlen];
    char title[attlen];
    char institution[attlen];
    char source[attlen];
    char history[attlen];
    char contact[attlen];
    char references[attlen];
    char processing_center[attlen];
    char reference_document[attlen];
    char mission_name[attlen];
    char altimeter_sensor_name[attlen];
    char radiometer_sensor_name[attlen];
    char doris_sensor_name[attlen];
    char gpsr_sensor_name[attlen];
    char acq_station_name[attlen];
    short cycle_number;
    long absolute_rev_number;
    short pass_number;
    long absolute_pass_number;
    char equator_time[attlen];
    float equator_longitude;
    char first_meas_time[attlen];
    char last_meas_time[attlen];
    char xref_input_frame[attlen];
    char xref_altimeter_level1[attlen];
    char xref_radiometer_level1[attlen];
    char xref_altimeter_characterisation[attlen];
    char xref_altimeter_ltm[attlen];
    char xref_radiometer_temp[attlen];
    char xref_doris_uso[attlen];
    char xref_orbit_data[attlen];
    char xref_pf_data[attlen];
    char xref_pole_location[attlen];
    char xref_orf_data[attlen];
    char xref_meteorological_files[attlen];
    char xref_utc_tai_data[attlen];
    char xref_radiometer_calibration[attlen];
    char xref_gim_data[attlen];
    char xref_mog2d_data[attlen];
    double ellipsoid_axis;
    double ellipsoid_flattening;
} sgdr_gbl_att_type;

typedef struct {
    double time_20hz[pass_len][meas_ind];
    double time[pass_len];
    int lon_20hz[pass_len][meas_ind];
    int lat_20hz[pass_len][meas_ind];
    int alt_20hz[pass_len][meas_ind];
    int range_20hz_ku[pass_len][meas_ind];
    int range_20hz_c[pass_len][meas_ind];
    int ice_range_20hz_ku[pass_len][meas_ind];
    int ice_range_20hz_c[pass_len][meas_ind];
    int tracker_20hz_ku[pass_len][meas_ind];
    int tracker_diode_20hz_ku[pass_len][meas_ind];
    int tracker_20hz_c[pass_len][meas_ind];
    int scaling_factor_20hz_ku[pass_len][meas_ind];
    int scaling_factor_20hz_c[pass_len][meas_ind];
    int epoch_20hz_ku[pass_len][meas_ind];
    int width_leading_edge_20hz_ku[pass_len][meas_ind];
    int amplitude_20hz_ku[pass_len][meas_ind];
    int thermal_noise_20hz_ku[pass_len][meas_ind];
    int epoch_20hz_c[pass_len][meas_ind];
    int width_leading_edge_20hz_c[pass_len][meas_ind];
    int amplitude_20hz_c[pass_len][meas_ind];
    int thermal_noise_20hz_c[pass_len][meas_ind];
    int lat[pass_len];
    int lon[pass_len];
    int alt[pass_len];
    int range_ku[pass_len];
    int range_c[pass_len];
    int net_instr_corr_range_ku[pass_len];
    int net_instr_corr_range_c[pass_len];
    int mean_sea_surface[pass_len];
    int mean_topography[pass_len];
    int geoid[pass_len];
    int bathymetry[pass_len];
    int ocean_tide_sol1[pass_len];
    int ocean_tide_sol2[pass_len];
    int uso_corr[pass_len];
    int internal_path_delay_corr_ku[pass_len];
    int internal_path_delay_corr_c[pass_len];
    short waveforms_20hz_ku[pass_len][meas_ind][wvf_ind];
    short waveforms_20hz_c[pass_len][meas_ind][wvf_ind];
    short internal_corr_sig0_ku[pass_len];
    short internal_corr_sig0_c[pass_len];
    short swh_20hz_ku[pass_len][meas_ind];
    short swh_20hz_c[pass_len][meas_ind];
    short sig0_20hz_ku[pass_len][meas_ind];
    short sig0_20hz_c[pass_len][meas_ind];
    short off_nadir_angle_wf_20hz_ku[pass_len][meas_ind];
    short ice_sig0_20hz_ku[pass_len][meas_ind];
    short ice_sig0_20hz_c[pass_len][meas_ind];
    short mqe_20hz_ku[pass_len][meas_ind];
    short mqe_20hz_c[pass_len][meas_ind];
    short peakiness_20hz_ku[pass_len][meas_ind];
    short peakiness_20hz_c[pass_len][meas_ind];
    short orb_alt_rate[pass_len];
    short range_rms_ku[pass_len];
    short range_rms_c[pass_len];
    short model_dry_tropo_corr[pass_len];
    short model_wet_tropo_corr[pass_len];
    short rad_wet_tropo_corr[pass_len];
    short iono_corr_alt_ku[pass_len];
    short iono_corr_gim_ku[pass_len];
    short sea_state_bias_ku[pass_len];
    short sea_state_bias_c[pass_len];
/* Hugh: commenting out data types that are not in jason-2 */
/*    short pseudo_dat_bias_corr[pass_len]; */
    short swh_ku[pass_len];
    short swh_c[pass_len];
    short swh_rms_ku[pass_len];
    short swh_rms_c[pass_len];
    short net_instr_corr_swh_ku[pass_len];
    short net_instr_corr_swh_c[pass_len];
    short sig0_ku[pass_len];
    short sig0_c[pass_len];
    short sig0_rms_ku[pass_len];
    short sig0_rms_c[pass_len];
    short agc_ku[pass_len];
    short agc_c[pass_len];
    short agc_rms_ku[pass_len];
    short agc_rms_c[pass_len];
    short net_instr_corr_sig0_ku[pass_len];
    short net_instr_corr_sig0_c[pass_len];
    short atmos_corr_sig0_ku[pass_len];
    short atmos_corr_sig0_c[pass_len];
    short off_nadir_angle_wf_ku[pass_len];
/* Hugh: commenting out data types that are not in jason-2 */
/*    short off_nadir_angle_pf[pass_len]; */
    short tb_187[pass_len];
    short tb_238[pass_len];
    short tb_340[pass_len];
    short inv_bar_corr[pass_len];
    short hf_fluctuations_corr[pass_len];
    short ocean_tide_equil[pass_len];
    short ocean_tide_non_equil[pass_len];
    short load_tide_sol1[pass_len];
    short load_tide_sol2[pass_len];
    short solid_earth_tide[pass_len];
    short pole_tide[pass_len];
    short wind_speed_model_u[pass_len];
    short wind_speed_model_v[pass_len];
    short wind_speed_alt[pass_len];
    short wind_speed_rad[pass_len];
    short rad_water_vapor[pass_len];
    short rad_liquid_water[pass_len];
    short modeled_instr_corr_range_ku[pass_len];
    short modeled_instr_corr_range_c[pass_len];
    short doppler_corr_ku[pass_len];
    short doppler_corr_c[pass_len];
    short cog_corr[pass_len];
    short modeled_instr_corr_swh_ku[pass_len];
    short modeled_instr_corr_swh_c[pass_len];
    short modeled_instr_corr_sig0_ku[pass_len];
    short modeled_instr_corr_sig0_c[pass_len];
    unsigned char alt_state_flag_acq_mode_20hz[pass_len][meas_ind];
    unsigned char range_used_20hz_ku[pass_len][meas_ind];
    unsigned char range_used_20hz_c[pass_len][meas_ind];
    unsigned char number_of_iterations_ku[pass_len][meas_ind];
    unsigned char number_of_iterations_c[pass_len][meas_ind];
    unsigned char swh_used_20hz_ku[pass_len][meas_ind];
    unsigned char swh_used_20hz_c[pass_len][meas_ind];
    unsigned char sig0_used_20hz_ku[pass_len][meas_ind];
    unsigned char sig0_used_20hz_c[pass_len][meas_ind];
    unsigned char surface_type[pass_len];
    unsigned char alt_echo_type[pass_len];
    unsigned char rad_surf_type[pass_len];
    unsigned char qual_alt_1hz_range_ku[pass_len];
    unsigned char qual_alt_1hz_range_c[pass_len];
    unsigned char qual_alt_1hz_swh_ku[pass_len];
    unsigned char qual_alt_1hz_swh_c[pass_len];
    unsigned char qual_alt_1hz_sig0_ku[pass_len];
    unsigned char qual_alt_1hz_sig0_c[pass_len];
    unsigned char qual_alt_1hz_off_nadir_angle_wf_ku[pass_len];
/*    unsigned char qual_alt_1hz_off_nadir_angle_pf[pass_len]; */
    unsigned char qual_inst_corr_1hz_range_ku[pass_len];
    unsigned char qual_inst_corr_1hz_range_c[pass_len];
    unsigned char qual_inst_corr_1hz_swh_ku[pass_len];
    unsigned char qual_inst_corr_1hz_swh_c[pass_len];
    unsigned char qual_inst_corr_1hz_sig0_ku[pass_len];
    unsigned char qual_inst_corr_1hz_sig0_c[pass_len];
    unsigned char qual_rad_1hz_tb187[pass_len];
    unsigned char qual_rad_1hz_tb238[pass_len];
    unsigned char qual_rad_1hz_tb340[pass_len];
    unsigned char alt_state_flag_oper[pass_len];
    unsigned char alt_state_flag_c_band[pass_len];
    unsigned char alt_state_flag_band_seq[pass_len];
    unsigned char alt_state_flag_ku_band_status[pass_len];
    unsigned char alt_state_flag_c_band_status[pass_len];
    unsigned char alt_state_flag_tracking_mode_20hz[pass_len][meas_ind];
    unsigned char rad_state_flag_oper[pass_len];
    unsigned char orb_state_flag_diode[pass_len];
    unsigned char orb_state_flag_rest[pass_len];
    unsigned char ecmwf_meteo_map_avail[pass_len];
    unsigned char rain_flag[pass_len];
    unsigned char ice_flag[pass_len];
    unsigned char interp_flag_tb[pass_len];
    unsigned char interp_flag_mean_sea_surface[pass_len];
    unsigned char interp_flag_mdt[pass_len];
    unsigned char interp_flag_ocean_tide_sol1[pass_len];
    unsigned char interp_flag_ocean_tide_sol2[pass_len];
    unsigned char interp_flag_meteo[pass_len];
    unsigned char range_numval_ku[pass_len];
    unsigned char range_numval_c[pass_len];
    unsigned char swh_numval_ku[pass_len];
    unsigned char swh_numval_c[pass_len];
    unsigned char sig0_numval_ku[pass_len];
    unsigned char sig0_numval_c[pass_len];
    unsigned char agc_numval_ku[pass_len];
    unsigned char agc_numval_c[pass_len];
/*    unsigned char atmos_corr_sig0_ku[pass_len];
    unsigned char atmos_corr_sig0_c[pass_len]; */
} sgdr_rec_type;

typedef struct {
    double scale_factor;
    double add_offset;
    long FillValue;
    char long_name[attlen];
    char units[attlen];
} sgdr_att_vals ;

typedef struct {
    sgdr_att_vals time;
    sgdr_att_vals time_20hz;
    sgdr_att_vals lat;
    sgdr_att_vals lon;
    sgdr_att_vals lon_20hz;
    sgdr_att_vals lat_20hz;
    sgdr_att_vals surface_type;
    sgdr_att_vals alt_echo_type;
    sgdr_att_vals rad_surf_type;
    sgdr_att_vals qual_alt_1hz_range_ku;
    sgdr_att_vals qual_alt_1hz_range_c;
    sgdr_att_vals qual_alt_1hz_swh_ku;
    sgdr_att_vals qual_alt_1hz_swh_c;
    sgdr_att_vals qual_alt_1hz_sig0_ku;
    sgdr_att_vals qual_alt_1hz_sig0_c;
    sgdr_att_vals qual_alt_1hz_off_nadir_angle_wf_ku;
/*    sgdr_att_vals qual_alt_1hz_off_nadir_angle_pf; */
    sgdr_att_vals qual_inst_corr_1hz_range_ku;
    sgdr_att_vals qual_inst_corr_1hz_range_c;
    sgdr_att_vals qual_inst_corr_1hz_swh_ku;
    sgdr_att_vals qual_inst_corr_1hz_swh_c;
    sgdr_att_vals qual_inst_corr_1hz_sig0_ku;
    sgdr_att_vals qual_inst_corr_1hz_sig0_c;
    sgdr_att_vals qual_rad_1hz_tb187;
    sgdr_att_vals qual_rad_1hz_tb238;
    sgdr_att_vals qual_rad_1hz_tb340;
    sgdr_att_vals alt_state_flag_oper;
    sgdr_att_vals alt_state_flag_c_band;
    sgdr_att_vals alt_state_flag_band_seq;
    sgdr_att_vals alt_state_flag_ku_band_status;
    sgdr_att_vals alt_state_flag_c_band_status;
    sgdr_att_vals alt_state_flag_tracking_mode_20hz;
    sgdr_att_vals alt_state_flag_acq_mode_20hz;
    sgdr_att_vals rad_state_flag_oper;
    sgdr_att_vals orb_state_flag_diode;
    sgdr_att_vals orb_state_flag_rest;
    sgdr_att_vals ecmwf_meteo_map_avail;
    sgdr_att_vals rain_flag;
    sgdr_att_vals ice_flag;
    sgdr_att_vals interp_flag_tb;
    sgdr_att_vals interp_flag_mean_sea_surface;
    sgdr_att_vals interp_flag_mdt;
    sgdr_att_vals interp_flag_ocean_tide_sol1;
    sgdr_att_vals interp_flag_ocean_tide_sol2;
    sgdr_att_vals interp_flag_meteo;
    sgdr_att_vals alt;
    sgdr_att_vals alt_20hz;
    sgdr_att_vals orb_alt_rate;
    sgdr_att_vals range_ku;
    sgdr_att_vals range_20hz_ku;
    sgdr_att_vals range_c;
    sgdr_att_vals range_20hz_c;
    sgdr_att_vals range_used_20hz_ku;
    sgdr_att_vals range_used_20hz_c;
    sgdr_att_vals range_rms_ku;
    sgdr_att_vals range_rms_c;
    sgdr_att_vals range_numval_ku;
    sgdr_att_vals range_numval_c;
    sgdr_att_vals number_of_iterations_ku;
    sgdr_att_vals number_of_iterations_c;
    sgdr_att_vals net_instr_corr_range_ku;
    sgdr_att_vals net_instr_corr_range_c;
    sgdr_att_vals model_dry_tropo_corr;
    sgdr_att_vals model_wet_tropo_corr;
    sgdr_att_vals rad_wet_tropo_corr;
    sgdr_att_vals iono_corr_alt_ku;
    sgdr_att_vals iono_corr_gim_ku;
    sgdr_att_vals sea_state_bias_ku;
    sgdr_att_vals sea_state_bias_c;
/*    sgdr_att_vals pseudo_dat_bias_corr; */
    sgdr_att_vals swh_ku;
    sgdr_att_vals swh_20hz_ku;
    sgdr_att_vals swh_c;
    sgdr_att_vals swh_20hz_c;
    sgdr_att_vals swh_used_20hz_ku;
    sgdr_att_vals swh_used_20hz_c;
    sgdr_att_vals swh_rms_ku;
    sgdr_att_vals swh_rms_c;
    sgdr_att_vals swh_numval_ku;
    sgdr_att_vals swh_numval_c;
    sgdr_att_vals net_instr_corr_swh_ku;
    sgdr_att_vals net_instr_corr_swh_c;
    sgdr_att_vals sig0_ku;
    sgdr_att_vals sig0_20hz_ku;
    sgdr_att_vals sig0_c;
    sgdr_att_vals sig0_20hz_c;
    sgdr_att_vals sig0_used_20hz_ku;
    sgdr_att_vals sig0_used_20hz_c;
    sgdr_att_vals sig0_rms_ku;
    sgdr_att_vals sig0_rms_c;
    sgdr_att_vals sig0_numval_ku;
    sgdr_att_vals sig0_numval_c;
    sgdr_att_vals agc_ku;
    sgdr_att_vals agc_c;
    sgdr_att_vals agc_rms_ku;
    sgdr_att_vals agc_rms_c;
    sgdr_att_vals agc_numval_ku;
    sgdr_att_vals agc_numval_c;
    sgdr_att_vals net_instr_corr_sig0_ku;
    sgdr_att_vals net_instr_corr_sig0_c;
    sgdr_att_vals atmos_corr_sig0_ku;
    sgdr_att_vals atmos_corr_sig0_c;
    sgdr_att_vals off_nadir_angle_wf_ku;
    sgdr_att_vals off_nadir_angle_wf_20hz_ku;
/*    sgdr_att_vals off_nadir_angle_pf; */
    sgdr_att_vals tb_187;
    sgdr_att_vals tb_238;
    sgdr_att_vals tb_340;
    sgdr_att_vals mean_sea_surface;
    sgdr_att_vals mean_topography;
    sgdr_att_vals geoid;
    sgdr_att_vals bathymetry;
    sgdr_att_vals inv_bar_corr;
    sgdr_att_vals hf_fluctuations_corr;
    sgdr_att_vals ocean_tide_sol1;
    sgdr_att_vals ocean_tide_sol2;
    sgdr_att_vals ocean_tide_equil;
    sgdr_att_vals ocean_tide_non_equil;
    sgdr_att_vals load_tide_sol1;
    sgdr_att_vals load_tide_sol2;
    sgdr_att_vals solid_earth_tide;
    sgdr_att_vals pole_tide;
    sgdr_att_vals wind_speed_model_u;
    sgdr_att_vals wind_speed_model_v;
    sgdr_att_vals wind_speed_alt;
    sgdr_att_vals wind_speed_rad;
    sgdr_att_vals rad_water_vapor;
    sgdr_att_vals rad_liquid_water;
    sgdr_att_vals ice_range_20hz_ku;
    sgdr_att_vals ice_range_20hz_c;
    sgdr_att_vals ice_sig0_20hz_ku;
    sgdr_att_vals ice_sig0_20hz_c;
    sgdr_att_vals mqe_20hz_ku;
    sgdr_att_vals mqe_20hz_c;
    sgdr_att_vals peakiness_20hz_ku;
    sgdr_att_vals peakiness_20hz_c;
    sgdr_att_vals tracker_20hz_ku;
    sgdr_att_vals tracker_diode_20hz_ku;
    sgdr_att_vals tracker_20hz_c;
    sgdr_att_vals uso_corr;
    sgdr_att_vals internal_path_delay_corr_ku;
    sgdr_att_vals internal_path_delay_corr_c;
    sgdr_att_vals modeled_instr_corr_range_ku;
    sgdr_att_vals modeled_instr_corr_range_c;
    sgdr_att_vals doppler_corr_ku;
    sgdr_att_vals doppler_corr_c;
    sgdr_att_vals cog_corr;
    sgdr_att_vals modeled_instr_corr_swh_ku;
    sgdr_att_vals modeled_instr_corr_swh_c;
    sgdr_att_vals internal_corr_sig0_ku;
    sgdr_att_vals internal_corr_sig0_c;
    sgdr_att_vals modeled_instr_corr_sig0_ku;
    sgdr_att_vals modeled_instr_corr_sig0_c;
    sgdr_att_vals scaling_factor_20hz_ku;
    sgdr_att_vals scaling_factor_20hz_c;
    sgdr_att_vals epoch_20hz_ku;
    sgdr_att_vals width_leading_edge_20hz_ku;
    sgdr_att_vals amplitude_20hz_ku;
    sgdr_att_vals thermal_noise_20hz_ku;
    sgdr_att_vals epoch_20hz_c;
    sgdr_att_vals width_leading_edge_20hz_c;
    sgdr_att_vals amplitude_20hz_c;
    sgdr_att_vals thermal_noise_20hz_c;
    sgdr_att_vals waveforms_20hz_ku;
    sgdr_att_vals waveforms_20hz_c;
} sgdr_att_type;
