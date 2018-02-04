/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    NSMutableArray * _queryList;
}

- (void).cxx_destruct;
- (void)addSubQueryList:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (bool)evaluate;
- (id)expressionAsString;
- (id)init;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (id)subQueryList;

@end