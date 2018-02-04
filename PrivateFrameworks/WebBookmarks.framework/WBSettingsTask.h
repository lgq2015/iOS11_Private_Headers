/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBSettingsTask : NSObject {
    long long  _taskType;
    WBWebsiteDataRecord * _websiteDataRecord;
}

@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly) WBWebsiteDataRecord *websiteDataRecord;

+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;
+ (id)taskWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2;
- (long long)taskType;
- (id)websiteDataRecord;

@end
