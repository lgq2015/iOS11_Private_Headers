/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding> {
    NSDictionary * _additionalParameters;
    NSString * _clientBundleID;
    NSString * _clientName;
    NSString * _eventType;
}

@property (nonatomic, copy) NSDictionary *additionalParameters;
@property (nonatomic, copy) NSString *clientBundleID;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly, copy) NSString *eventType;

+ (id)contextWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalParameters;
- (id)clientBundleID;
- (id)clientName;
- (id)dataRepresentation;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1;
- (void)setAdditionalParameters:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setClientName:(id)arg1;

@end
