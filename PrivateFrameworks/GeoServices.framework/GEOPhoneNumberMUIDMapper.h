/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberMUIDMapper : NSObject {
    NSString * _filePath;
    NSMutableDictionary * _phoneNumberMuidMapping;
    NSMutableArray * _uniquePhoneNumbers;
    NSObject<OS_dispatch_queue> * _writeQ;
}

- (void).cxx_destruct;
- (void)_pruneToSize:(unsigned long long)arg1;
- (void)_save;
- (bool)getMuid:(out unsigned long long*)arg1 providerId:(out int*)arg2 forPhoneNumber:(unsigned long long)arg3;
- (id)initWithMappingFilePath:(id)arg1;
- (void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3;

@end
