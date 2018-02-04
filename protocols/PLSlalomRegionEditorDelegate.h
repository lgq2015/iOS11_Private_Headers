/* made by EzioChiu.
 */

@protocol PLSlalomRegionEditorDelegate <NSObject>

@required

- (void)slalomRegionEditorDidBeginEditing:(PLSlalomRegionEditor *)arg1 withStartHandle:(bool)arg2;
- (void)slalomRegionEditorDidEndEditing:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorEndValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(PLSlalomRegionEditor *)arg1;
- (bool)slalomRegionEditorRequestForceZoom:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorStartValueChanged:(PLSlalomRegionEditor *)arg1;

@end
