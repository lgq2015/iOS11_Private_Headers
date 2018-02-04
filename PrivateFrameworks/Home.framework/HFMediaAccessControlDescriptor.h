/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable> {
    unsigned long long  _access;
    NSString * _accessPassword;
    bool  _accessRequiresPassword;
}

@property (nonatomic, readonly) unsigned long long access;
@property (nonatomic, readonly, copy) NSString *accessPassword;
@property (nonatomic, readonly) bool accessRequiresPassword;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultAccessControl;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(bool)arg2 password:(id)arg3;
+ (id)na_identity;

- (void).cxx_destruct;
- (unsigned long long)access;
- (id)accessPassword;
- (bool)accessRequiresPassword;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(bool)arg2 password:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
