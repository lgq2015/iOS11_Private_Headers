/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagRecordSource : FCRecordSource {
    unsigned long long  _desiredFieldOptions;
    NSArray * _genericKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;

- (void).cxx_destruct;
- (unsigned long long)desiredFieldOptions;
- (id)desiredKeys;
- (id)genericKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (id)localizableKeys;
- (id)localizedKeysByOriginalKey;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveTagRecords:(id)arg1;
- (void)setDesiredFieldOptions:(unsigned long long)arg1;

@end
