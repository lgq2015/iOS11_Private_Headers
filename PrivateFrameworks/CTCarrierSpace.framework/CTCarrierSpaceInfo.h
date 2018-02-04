/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding> {
    CTCarrierSpaceAppsInfo * _appsInfo;
    CTCarrierSpacePlansInfo * _plansInfo;
    CTCarrierSpaceUsageInfo * _usageInfo;
}

@property (nonatomic, retain) CTCarrierSpaceAppsInfo *appsInfo;
@property (nonatomic, retain) CTCarrierSpacePlansInfo *plansInfo;
@property (nonatomic, retain) CTCarrierSpaceUsageInfo *usageInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appsInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plansInfo;
- (void)setAppsInfo:(id)arg1;
- (void)setPlansInfo:(id)arg1;
- (void)setUsageInfo:(id)arg1;
- (id)usageInfo;

@end
