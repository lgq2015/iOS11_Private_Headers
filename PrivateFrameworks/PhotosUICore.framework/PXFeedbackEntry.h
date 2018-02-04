/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackEntry : NSObject <NSCoding> {
    bool  _alreadyCollected;
    NSString * _appVersion;
    NSDictionary * _feedbackItemDetails;
    NSMutableDictionary * _feedbackItemsDict;
    long long  _generalFeedback;
    NSString * _systemID;
    NSDate * _timestamp;
}

@property (nonatomic) bool alreadyCollected;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, retain) NSMutableDictionary *feedbackItemsDict;
@property (nonatomic) long long generalFeedback;
@property (nonatomic, copy) NSString *systemID;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)createFakeTestEntry;
+ (id)createFakeTestFeedbackDictionary;
+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForMemoryDetailsKeys;

- (void).cxx_destruct;
- (bool)alreadyCollected;
- (id)appVersion;
- (id)asTextForItemKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackItemsDict;
- (long long)generalFeedback;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;
- (id)longDescription;
- (id)osKeyForItemKey:(id)arg1;
- (void)setAlreadyCollected:(bool)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setFeedbackItemsDict:(id)arg1;
- (void)setGeneralFeedback:(long long)arg1;
- (void)setSystemID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)systemID;
- (id)timestamp;
- (id)uniqueID;
- (bool)userLikedResults;

@end
