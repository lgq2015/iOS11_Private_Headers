/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteraction : NSObject <NSSecureCoding, _CDPDataPoint> {
    NSString * _account;
    NSString * _bundleId;
    NSURL * _contentURL;
    long long  _direction;
    NSString * _domainIdentifier;
    NSDate * _endDate;
    bool  _isResponse;
    NSArray * _keywords;
    NSString * _locationUUID;
    long long  _mechanism;
    NSArray * _recipients;
    _CDContact * _sender;
    NSDate * _startDate;
    NSString * _uuid;
}

@property (retain) NSString *account;
@property (retain) NSString *bundleId;
@property (retain) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long direction;
@property (retain) NSString *domainIdentifier;
@property (retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property bool isResponse;
@property (retain) NSArray *keywords;
@property (retain) NSString *locationUUID;
@property long long mechanism;
@property (nonatomic, readonly) NSArray *peopleIdentifiers;
@property (retain) NSArray *recipients;
@property (retain) _CDContact *sender;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) bool userIsSender;
@property (nonatomic, readonly) bool userIsThreadInitiator;
@property (retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)bundleId;
- (id)contentURL;
- (id)description;
- (id)descriptionOfArray:(id)arg1;
- (long long)direction;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initwithINInteraction:(id)arg1 bundleID:(id)arg2;
- (bool)isResponse;
- (id)keywords;
- (id)locationUUID;
- (long long)mechanism;
- (id)peopleIdentifiers;
- (id)recipients;
- (id)sender;
- (void)setAccount:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setMechanism:(long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)startDate;
- (id)timestamp;
- (id)title;
- (bool)userIsSender;
- (bool)userIsThreadInitiator;
- (id)uuid;

@end
