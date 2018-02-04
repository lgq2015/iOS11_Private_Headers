/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReuseQueue : NSObject {
    NSMutableDictionary * __objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary * __reusableObjectsByReuseIdentifier;
    bool  _reuseEnabled;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (getter=isReuseEnabled, nonatomic) bool reuseEnabled;

- (void).cxx_destruct;
- (id)_objectCreationBlocksByReuseIdentifier;
- (id)_reusableObjectsByReuseIdentifier;
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(bool*)arg2;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)init;
- (bool)isReuseEnabled;
- (void)registerObjectCreationBlock:(id /* block */)arg1 withReuseIdentifier:(id)arg2;
- (void)setReuseEnabled:(bool)arg1;

@end
