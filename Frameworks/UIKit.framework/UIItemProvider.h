/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIItemProvider : NSItemProvider {
    NSDictionary * _teamMetadata;
}

@property (nonatomic) struct CGSize { double x1; double x2; } estimatedDisplayedSize;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *size;
@property (nonatomic, copy) NSDictionary *teamMetadata;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (bool)canCreateObjectOfClass:(Class)arg1;
- (bool)canInstantiateObjectOfClass:(Class)arg1;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)createObjectOfClass:(Class)arg1 completionBlock:(id /* block */)arg2;
- (id)createObjectOfClass:(Class)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })estimatedDisplayedSize;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(bool*)arg2 error:(id*)arg3;
- (void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithPBItem:(id)arg1;
- (void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)modificationDate;
- (id)name;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(id /* block */)arg4;
- (void)registerObject:(id)arg1 options:(id)arg2;
- (void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(id /* block */)arg3;
- (void)setEstimatedDisplayedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setTeamMetadata:(id)arg1;
- (id)size;
- (id)teamMetadata;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)supportedInQLController;

@end
