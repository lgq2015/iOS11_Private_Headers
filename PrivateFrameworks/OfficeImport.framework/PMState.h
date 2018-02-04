/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMState : CMState {
    OADTablePartStyle * mCurrentRowStyle;
    CMOutlineState * mListState;
}

- (void).cxx_destruct;
- (id)currentRowStyle;
- (id)init;
- (id)listState;
- (void)setCurrentRowStyle:(id)arg1;

@end
