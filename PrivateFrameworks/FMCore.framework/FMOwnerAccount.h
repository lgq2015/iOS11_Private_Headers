/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMOwnerAccount : NSObject {
    NSDictionary * _dataclassProperties;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _personId;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSDictionary *dataclassProperties;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *personId;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataclassProperties;
- (id)description;
- (id)firstName;
- (id)hostNameOfType:(long long)arg1;
- (id)lastName;
- (id)personId;
- (id)tokenOfType:(long long)arg1;
- (id)username;

@end
