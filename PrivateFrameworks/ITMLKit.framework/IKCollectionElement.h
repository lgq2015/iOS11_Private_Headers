/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCollectionElement : IKViewElement {
    NSArray * _sections;
}

@property (nonatomic, readonly, retain) IKHeaderElement *header;
@property (nonatomic, readonly, retain) NSArray *sections;

- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)header;
- (id)sections;

@end
