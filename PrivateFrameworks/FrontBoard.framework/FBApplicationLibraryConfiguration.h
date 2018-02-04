/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationLibraryConfiguration : NSObject <NSCopying> {
    bool  _allowConcurrentLoading;
    Class  _applicationInfoClass;
    Class  _applicationPlaceholderClass;
    id /* block */  _installedApplicationFilter;
    id /* block */  _placeholderFilter;
}

@property (nonatomic) bool allowConcurrentLoading;
@property (nonatomic, retain) Class applicationInfoClass;
@property (nonatomic, retain) Class applicationPlaceholderClass;
@property (nonatomic, copy) id /* block */ installedApplicationFilter;
@property (nonatomic, copy) id /* block */ placeholderFilter;

- (bool)allowConcurrentLoading;
- (Class)applicationInfoClass;
- (Class)applicationPlaceholderClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id /* block */)installedApplicationFilter;
- (id /* block */)placeholderFilter;
- (void)setAllowConcurrentLoading:(bool)arg1;
- (void)setApplicationInfoClass:(Class)arg1;
- (void)setApplicationPlaceholderClass:(Class)arg1;
- (void)setInstalledApplicationFilter:(id /* block */)arg1;
- (void)setPlaceholderFilter:(id /* block */)arg1;

@end
