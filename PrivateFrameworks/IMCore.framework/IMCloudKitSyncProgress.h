/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncProgress : NSObject {
    NSString * _actionLabel;
    long long  _actionType;
    bool  _finishing;
    bool  _hidden;
    double  _progressBarMax;
    double  _progressBarValue;
    NSString * _progressLabel;
    bool  _shouldShowProgressBar;
    IMCloudKitSyncState * _syncState;
    IMCloudKitSyncStatistics * _syncStatistics;
    NSString * _userMessageLabel;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic) long long actionType;
@property (nonatomic, readonly) NSArray *errors;
@property (getter=isFinishing, nonatomic, readonly) bool finishing;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic) double progressBarMax;
@property (nonatomic) double progressBarValue;
@property (nonatomic, retain) NSString *progressLabel;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic) bool shouldShowProgressBar;
@property (nonatomic, readonly) bool shouldShowUserActionLabel;
@property (nonatomic, readonly) bool shouldShowUserMessageLabel;
@property (nonatomic, readonly) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *syncStatistics;
@property (nonatomic, retain) NSString *userMessageLabel;

+ (id)createSyncProgressWithSyncState:(id)arg1 syncStatistics:(id)arg2 finishing:(bool)arg3 hidden:(bool)arg4;

- (void).cxx_destruct;
- (id)actionLabel;
- (long long)actionType;
- (id)description;
- (id)errors;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2 finishing:(bool)arg3 hidden:(bool)arg4;
- (bool)isFinishing;
- (bool)isHidden;
- (double)percentComplete;
- (id)percentCompleteString;
- (double)progressBarMax;
- (double)progressBarValue;
- (id)progressLabel;
- (double)remainingItems;
- (void)setActionLabel:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setProgressBarMax:(double)arg1;
- (void)setProgressBarValue:(double)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setShouldShowProgressBar:(bool)arg1;
- (void)setUserMessageLabel:(id)arg1;
- (bool)shouldShowProgressBar;
- (bool)shouldShowUserActionLabel;
- (bool)shouldShowUserMessageLabel;
- (id)syncState;
- (id)syncStatistics;
- (void)updateState;
- (id)userMessageLabel;

@end
