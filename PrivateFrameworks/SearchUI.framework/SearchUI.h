/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUI : NSObject

+ (id)cardViewControllerForCard:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (id)cardViewControllerForResult:(id)arg1 style:(unsigned long long)arg2;
+ (id)cardViewControllerForResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (double)idealPlatterWidth;
+ (double)idealPlatterWidthForOrientation:(long long)arg1;
+ (id)rowViewForResult:(id)arg1 style:(unsigned long long)arg2;
+ (id)rowViewForResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (id)viewForCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
+ (id)viewsForCardSections:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;

@end
