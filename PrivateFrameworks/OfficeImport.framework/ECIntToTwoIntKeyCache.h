/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECIntToTwoIntKeyCache : NSObject {
    ECIntTwoIntKeyDictionary * mCache;
}

- (void)dealloc;
- (id)init;
- (bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long*)arg3;
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;

@end
