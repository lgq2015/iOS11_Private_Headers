/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILoginCredential : NSObject <NSCopying> {
    NSString * _password;
    NSString * _site;
    NSString * _username;
}

@property (nonatomic, readonly, retain) NSString *password;
@property (nonatomic, readonly, retain) NSString *site;
@property (nonatomic, readonly, retain) NSString *username;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)site;
- (id)username;

@end
