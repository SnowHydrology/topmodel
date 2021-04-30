#ifndef BMI_TOPMODEL_H
#define BMI_TOPMODEL_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "bmi.h"
#include "topmodel.h"

Bmi* register_bmi_topmodel(Bmi *model);

topmodel_model * new_bmi_topmodel();


int read_file_line_counts(const char* file_name, 
                                 int* line_count, 
                                 int* max_line_length);

int init_config(const char* config_file, topmodel_model* model);

int read_init_config(const char* config_file, topmodel_model* model);


#if defined(__cplusplus)
}
#endif

#endif
