/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsGroupList : ALAssetsGroup {
    <PLAssetContainerList> * _containerList;
}

@property (nonatomic, readonly, retain) <PLAssetContainerList> *containerList;

- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)containerList;
- (void)dealloc;
- (id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3;
- (id)valueForProperty:(id)arg1;

@end
