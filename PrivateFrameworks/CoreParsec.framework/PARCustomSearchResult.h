/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARCustomSearchResult : SFCustom {
    NSString * _fbr;
    NSString * _srf;
}

@property (nonatomic, readonly, copy) NSString *fbr;
@property (nonatomic, readonly, copy) NSString *srf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCoder:(id)arg1;
- (id)initWithFBR:(id)arg1 srf:(id)arg2;
- (id)srf;

@end
