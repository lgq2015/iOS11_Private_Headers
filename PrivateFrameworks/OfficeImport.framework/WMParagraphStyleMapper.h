/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyleMapper : CMMapper {
    WMParagraphStyle * mStyle;
    WDParagraphProperties * wdParaProperties;
    WDParagraph * wdParagraph;
}

- (void).cxx_destruct;
- (id)bulletLabelForIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3;
- (bool)checkListId:(long long)arg1 level:(unsigned char)arg2;
- (void)destyleEmptyParagraph;
- (void)getListLevel:(char *)arg1 andListIndex:(int*)arg2 foundListLevel:(bool*)arg3 foundListIndex:(bool*)arg4 fromParagraphProperties:(id)arg5;
- (void)getListLevel:(char *)arg1 andListIndex:(int*)arg2 foundListLevel:(bool*)arg3 foundListIndex:(bool*)arg4 fromStyle:(id)arg5;
- (bool)getListLevel:(char *)arg1 andListIndex:(int*)arg2 fromStyleOnly:(bool)arg3;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(bool)arg3;
- (bool)isListItem;
- (id)labelStringWithGap:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBulletAt:(id)arg1 forIndex:(int)arg2 inLevelDescription:(id)arg3 listState:(id)arg4;
- (void)mapBulletFromListId:(int)arg1 listLevel:(unsigned char)arg2 at:(id)arg3 document:(id)arg4 state:(id)arg5;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;
- (void)mapListStyleFromParagraphStyleWithState:(id)arg1;
- (void)mapParagraphProperties;
- (void)mapParagraphStyle;
- (void)mapStyleFromListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;
- (void)updateOutlineStateWithListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;

@end
