/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityValueProviderWrapper : NSObject <MusicEntityValueProviding> {
    <MusicEntityValueProviding> * _entityValueProvider;
    NSMutableDictionary * _handlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addHandler:(id /* block */)arg1 forProperty:(id)arg2;
- (id)entityUniqueIdentifier;
- (id)entityValueProvider;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)initWithEntithValueProvider:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
