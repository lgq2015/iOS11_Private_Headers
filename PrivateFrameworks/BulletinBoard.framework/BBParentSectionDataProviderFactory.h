/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {
    BBSectionInfo * _sectionInfo;
    NSString * _universalSectionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) BBSectionInfo *sectionInfo;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *universalSectionIdentifier;

+ (id)factoryFromSectionInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataProviders;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (void)setUniversalSectionIdentifier:(id)arg1;
- (id)universalSectionIdentifier;

@end
