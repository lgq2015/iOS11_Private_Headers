/* made by EzioChiu.
 */

@protocol TSPObjectDelegate <TSPObjectModifyDelegate>

@required

- (TSPObjectContext *)context;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;

@end
