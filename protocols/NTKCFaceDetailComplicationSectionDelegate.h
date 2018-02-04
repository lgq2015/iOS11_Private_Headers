/* made by EzioChiu.
 */

@protocol NTKCFaceDetailComplicationSectionDelegate <NSObject>

@required

- (NSArray *)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 allowedComplicationsForSlot:(NSString *)arg2;
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 didChangeToComplication:(NTKComplication *)arg2 forSlot:(NSString *)arg3;

@end
