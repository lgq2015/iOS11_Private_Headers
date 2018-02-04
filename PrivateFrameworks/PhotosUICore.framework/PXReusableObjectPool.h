/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXReusableObjectPool : NSObject {
    NSMutableDictionary * __objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary * __reusableObjectsByReuseIdentifier;
    <PXReusableObjectPoolDelegate> * _delegate;
    struct { 
        bool respondsToDidCreateReusableObject; 
        bool respondsToObjectBecameReusable; 
        bool respondsToObjectPreparedForReuse; 
    }  _delegateFlags;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (nonatomic) <PXReusableObjectPoolDelegate> *delegate;

- (void).cxx_destruct;
- (id)_objectCreationBlocksByReuseIdentifier;
- (id)_reusableObjectsByReuseIdentifier;
- (void)checkInReusableObject:(id)arg1;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1;
- (id)delegate;
- (id)init;
- (void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
