/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailSettingsPersonDataSource : NSObject <PXPeopleDetailSettingsDataSource> {
    PHFetchResult * _persons;
    NSString * _title;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoreDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, retain) PHFetchResult *persons;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)action;
- (unsigned long long)faceCount:(long long)arg1;
- (bool)hasMoreDetails;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 persons:(id)arg2;
- (id)modelObjectForIndex:(long long)arg1;
- (unsigned long long)numberOfItems;
- (id)personNameAtIndex:(long long)arg1;
- (id)persons;
- (void)setPersons:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (long long)verifyTypeAtIndex:(long long)arg1;

@end
