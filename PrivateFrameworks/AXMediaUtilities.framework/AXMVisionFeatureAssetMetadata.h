/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding> {
    NSString * _EXIFUserComment;
    NSString * _IPTCCaptionAbstract;
    NSString * _PNGImageDescription;
    NSString * _TIFFImageDescription;
    NSURL * _assetURL;
    NSDate * _creationDate;
    NSString * _localizedTypeDescription;
    NSString * _name;
    NSString * _uti;
}

@property (nonatomic, retain) NSString *EXIFUserComment;
@property (nonatomic, retain) NSString *IPTCCaptionAbstract;
@property (nonatomic, retain) NSString *PNGImageDescription;
@property (nonatomic, retain) NSString *TIFFImageDescription;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *localizedTypeDescription;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *uti;

+ (id)assetMetadataFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EXIFUserComment;
- (id)IPTCCaptionAbstract;
- (id)PNGImageDescription;
- (id)TIFFImageDescription;
- (id)assetURL;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedTypeDescription;
- (id)name;
- (void)setAssetURL:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEXIFUserComment:(id)arg1;
- (void)setIPTCCaptionAbstract:(id)arg1;
- (void)setLocalizedTypeDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPNGImageDescription:(id)arg1;
- (void)setTIFFImageDescription:(id)arg1;
- (void)setUti:(id)arg1;
- (id)uti;

@end
