/* made by EzioChiu.
 */

@protocol _HKActiveWorkoutServer <NSObject>

@required

- (void)remote_activateWorkoutWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_endWorkoutWithEndDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_nukeWorkoutWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_pauseWorkoutWithDate:(void *)arg1 userInitiated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resumeWorkoutWithDate:(void *)arg1 userInitiated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
