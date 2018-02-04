/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDHandle : NSObject {
    NSString * _countryCode;
    NSString * _id;
    NSString * _personCentricID;
    NSString * _unformattedID;
}

@property (nonatomic, retain) NSString *ID;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly, retain) NSDictionary *handleInfo;
@property (nonatomic, retain) NSString *personCentricID;
@property (nonatomic, retain) NSString *unformattedID;

- (id)ID;
- (long long)compareIDs:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)handleInfo;
- (unsigned long long)hash;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (bool)isBetterDefinedThan:(id)arg1;
- (bool)isBusiness;
- (bool)isEqual:(id)arg1;
- (id)personCentricID;
- (void)setCountryCode:(id)arg1;
- (void)setID:(id)arg1;
- (void)setPersonCentricID:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)unformattedID;

@end
