/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalMeCard : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSString * _likenessString;
    NSString * _uniqueID;
    long long  _version;
}

@property (readonly, retain) NSString *displayName;
@property (readonly, retain) NSArray *emailAddresses;
@property (retain) NSString *likenessString;
@property (readonly, retain) NSString *uniqueID;
@property long long version;

+ (id)cardFromPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3 likenessString:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMeCard:(id)arg1;
- (id)likenessString;
- (id)preferredEmailAddress;
- (void)setLikenessString:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)uniqueID;
- (long long)version;
- (bool)writeToPath:(id)arg1;

@end
