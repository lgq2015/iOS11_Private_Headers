/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface ImageStore : NSObject

+ (struct CGImage { }*)cgImageFromImage:(id)arg1 forContentsScale:(double)arg2;
+ (id)imageForBaseStationWithProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(bool)arg4 cropped:(bool)arg5 threeDee:(bool)arg6;
+ (id)imageForInformationalDiagram:(unsigned int)arg1;
+ (id)imageForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(bool)arg4 small:(bool)arg5;
+ (id)imageForInformationalDiagramNamed:(id)arg1 small:(bool)arg2;
+ (id)imageNameForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(bool)arg4 small:(bool)arg5 useDataCache:(bool*)arg6;
+ (id)imageNameForProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(bool)arg4 cropped:(bool)arg5 threeDee:(bool)arg6;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3;
+ (double)informationDiagramBaseImageCenterOffset:(unsigned int)arg1 small:(bool)arg2;
+ (double)informationDiagramBaseImageRightEdgeInset:(unsigned int)arg1 small:(bool)arg2;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1 deviceKind:(int)arg2 audioImage:(bool)arg3 small:(bool)arg4;
+ (id)kitImageOfType:(long long)arg1;
+ (id)sharedImageStore;

@end
