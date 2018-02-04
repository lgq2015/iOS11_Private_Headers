/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPendingRequestReference : NSObject {
    NSString * _label;
    PHAGraphServiceWorker * _worker;
}

@property (retain) NSString *label;
@property PHAGraphServiceWorker *worker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setWorker:(id)arg1;
- (id)worker;

@end
