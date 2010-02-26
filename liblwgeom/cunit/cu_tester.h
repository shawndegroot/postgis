#define PG_TEST(test_func) { #test_func, test_func }
#define MAX_CUNIT_ERROR_LENGTH 512

/* Contains the most recent error message generated by lwerror. */
char cu_error_msg[MAX_CUNIT_ERROR_LENGTH+1];

/* Resets cu_error_msg back to blank. */
void cu_error_msg_reset(void);

