/* made by EzioChiu.
 */

@protocol _DECServerInterface

@required

- (void)decDeviceIdWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)predictionForCategories:(void *)arg1 consumer:(void *)arg2 criteria:(void *)arg3 limit:(void *)arg4 providesFeedback:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: unsigned long long, unsigned long long, NSDictionary *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _DECResult *, NSError *, void*
- (void)predictionForCategories:(void *)arg1 consumer:(void *)arg2 limit:(void *)arg3 providesFeedback:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: unsigned long long, unsigned long long, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _DECResult *, NSError *, void*
- (void)prewarmPredictionForCategories:(void *)arg1 consumer:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerClient:(void *)arg1 category:(void *)arg2 identifier:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: long long, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setPrediction:(void *)arg1 category:(void *)arg2 consumer:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: _DECPrediction *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)userAbandoned:(void *)arg1 result:(void *)arg2 metadata:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: _DECItem *, _DECResult *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)userEngaged:(void *)arg1 result:(void *)arg2 metadata:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: _DECItem *, _DECResult *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
