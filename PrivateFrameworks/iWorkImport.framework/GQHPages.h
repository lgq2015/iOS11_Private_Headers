/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHPages : NSObject <GQPagesGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)beginPublication:(id)arg1 state:(id)arg2;
+ (int)endPublication:(id)arg1 state:(id)arg2;
+ (Class)enterBodyStorage:(id)arg1;
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;
+ (int)handleFooters:(struct __CFArray { }*)arg1 state:(id)arg2;
+ (int)handleHeaders:(struct __CFArray { }*)arg1 state:(id)arg2;
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;
+ (void)handlePagesOrders:(id)arg1;
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (void)handleZOrder:(unsigned int)arg1 cssClassName:(struct __CFString { }*)arg2 state:(id)arg3;
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)arg1 state:(id)arg2;
+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)arg1 state:(id)arg2;
+ (void)mapHeaderOrFooter:(id)arg1 isHeader:(bool)arg2 toPublication:(id)arg3 state:(id)arg4;
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;

@end
