/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupAccessoryPayload : NSObject <NSSecureCoding> {
    NSString * _accessoryName;
    NSNumber * _categoryNumber;
    NSNumber * _flags;
    bool  _paired;
    NSString * _setupCode;
    NSString * _setupID;
    NSURL * _setupPayloadURL;
    bool  _supportsBTLE;
    bool  _supportsIP;
    bool  _supportsWAC;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSNumber *categoryNumber;
@property (nonatomic, retain) NSNumber *flags;
@property (nonatomic, readonly) bool hf_requiresEthernet;
@property (nonatomic) bool paired;
@property (nonatomic, retain) NSString *setupCode;
@property (nonatomic, retain) NSString *setupID;
@property (nonatomic, retain) NSURL *setupPayloadURL;
@property (nonatomic) bool supportsBTLE;
@property (nonatomic) bool supportsIP;
@property (nonatomic) bool supportsWAC;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parseSetupPayload:(id)arg1;
- (id)accessoryName;
- (id)categoryNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupPayload:(id)arg1;
- (id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)paired;
- (void)setAccessoryName:(id)arg1;
- (void)setCategoryNumber:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setSetupCode:(id)arg1;
- (void)setSetupID:(id)arg1;
- (void)setSetupPayloadURL:(id)arg1;
- (void)setSupportsBTLE:(bool)arg1;
- (void)setSupportsIP:(bool)arg1;
- (void)setSupportsWAC:(bool)arg1;
- (id)setupCode;
- (id)setupID;
- (id)setupPayloadURL;
- (bool)supportsBTLE;
- (bool)supportsIP;
- (bool)supportsWAC;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_requiresEthernet;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)debugDescription;
- (id)flagsDescription;

@end
