/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDataSourceSection : NSObject {
    bool  _disclosed;
    NSString * _disclosedTitle;
    unsigned long long  _personFetchType;
    NSString * _unDisclosedTitle;
}

@property (getter=isDisclosed) bool disclosed;
@property (nonatomic, copy) NSString *disclosedTitle;
@property (nonatomic, readonly) unsigned long long personFetchType;
@property (nonatomic, copy) NSString *unDisclosedTitle;

- (void).cxx_destruct;
- (id)disclosedTitle;
- (id)initWithPersonFetchType:(unsigned long long)arg1;
- (bool)isDisclosed;
- (unsigned long long)personFetchType;
- (void)setDisclosed:(bool)arg1;
- (void)setDisclosedTitle:(id)arg1;
- (void)setUnDisclosedTitle:(id)arg1;
- (id)unDisclosedTitle;

@end
