/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMBindingController : NSObject <IKJSDataItemObserver> {
    IKAppContext * _appContext;
    IKDataBinding * _binding;
    NSDictionary * _bindingKeysByPathString;
    IKJSDataItem * _dataItem;
    <IKDOMBindingControllerDelegate> * _delegate;
    struct { 
        bool hasDidLoadBinding; 
        bool hasShouldResolveData; 
        bool hasDoKeysAffectingChildren; 
        bool hasDoKeysAffectingSubtree; 
        bool hasAdditionalKeysToResolve; 
        bool hasApplyValueForKey; 
        bool hasDidResolveKeys; 
    }  _delegateFlags;
    IKDOMElement * _domElement;
    IKDOMBindingController * _parent;
    NSMutableArray * _scheduledUpdaters;
    bool  _shouldResolveData;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) IKDataBinding *binding;
@property (nonatomic, readonly) IKJSDataItem *dataItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKDOMBindingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDOMElement *domElement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IKDOMBindingController *parent;
@property (nonatomic, readonly) bool shouldResolveData;
@property (readonly) Class superclass;

+ (id)parsedBindingForDOMElement:(id)arg1;

- (void).cxx_destruct;
- (void)_resolve;
- (id)appContext;
- (id)binding;
- (id)dataItem;
- (void)dataItem:(id)arg1 didChangePropertyPathWithString:(id)arg2;
- (id)delegate;
- (id)domElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 delegate:(id)arg3;
- (id)parent;
- (void)scheduleUpdateUsingPreUpdate:(id /* block */)arg1 update:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldResolveData;
- (void)teardown;

@end
