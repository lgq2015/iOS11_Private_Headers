/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBWebsiteDataRecord : NSObject {
    NSString * _domain;
    unsigned long long  _usage;
}

@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic) unsigned long long usage;

+ (id)websiteDataRecordFromXPCDictionary:(id)arg1;
+ (id)websiteDataRecordWithDomain:(id)arg1;

- (void).cxx_destruct;
- (id)XPCDictionaryRepresentation;
- (id)_initWithDomain:(id)arg1;
- (id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2;
- (id)domain;
- (void)setUsage:(unsigned long long)arg1;
- (unsigned long long)usage;

@end
