/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUHeadlineAdContextProvider : NSObject <NUAdContextProvider> {
    <FCHeadlineProviding> * _headline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)headline;
- (id)initWithHeadline:(id)arg1;

@end
