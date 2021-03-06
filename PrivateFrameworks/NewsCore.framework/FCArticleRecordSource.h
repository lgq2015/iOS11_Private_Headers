/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleRecordSource : FCRecordSource {
    NSArray * _genericKeys;
}

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (id)identifierFromCKRecord:(id)arg1;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;
+ (bool)supportsDeletions;
+ (bool)useTaggedImages;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)experimentalizableKeys;
- (id)experimentalizedKeysByOriginalKey;
- (id)genericKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (id)localizedExperimentalizedKeysByOriginalKey;
- (id)localizedKeysByOriginalKey;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveArticleRecords:(id)arg1;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;

@end
