/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface _SUAutoInstallOperationModel : NSObject <NSCopying, NSSecureCoding> {
    int  _agreementStatus;
    SUAutoInstallForecast * _forecast;
    NSUUID * _id;
}

@property (nonatomic) int agreementStatus;
@property (nonatomic, retain) SUAutoInstallForecast *forecast;
@property (nonatomic, retain) NSUUID *id;

+ (bool)supportsSecureCoding;

- (int)agreementStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forecast;
- (id)id;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAgreementStatus:(int)arg1;
- (void)setForecast:(id)arg1;
- (void)setId:(id)arg1;

@end
