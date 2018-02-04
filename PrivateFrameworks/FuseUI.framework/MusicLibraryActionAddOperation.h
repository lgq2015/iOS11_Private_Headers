/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryActionAddOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _addToCloudLibrary;
    MPUContentItemIdentifierCollection * _contentItemIdentifierCollection;
    NSArray * _resultingItems;
    bool  _success;
}

@property (nonatomic) bool addToCloudLibrary;
@property (readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection;
@property (nonatomic, readonly, copy) NSArray *resultingItems;
@property (readonly) bool success;

+ (bool)canLibraryAddWithContentItemIdentifierCollection:(id)arg1;

- (void).cxx_destruct;
- (bool)addToCloudLibrary;
- (id)contentItemIdentifierCollection;
- (id)init;
- (id)initWithContentItemIdentifierCollection:(id)arg1;
- (void)main;
- (id)resultingItems;
- (void)setAddToCloudLibrary:(bool)arg1;
- (bool)success;

@end
