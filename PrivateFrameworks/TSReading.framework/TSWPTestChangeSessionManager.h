/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager> {
    TSWPChangeSession * _currentSession;
}

@property (nonatomic, readonly) bool isTrackingChanges;

- (id)changeSessionAuthorCreatedWithCommand:(id*)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (bool)isTrackingChanges;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1;

@end
