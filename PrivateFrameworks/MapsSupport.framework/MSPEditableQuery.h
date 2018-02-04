/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPEditableQuery : MSPQuery {
    MSPContainer * _container;
    NSString * _context;
    _MSPQueryState * _editedState;
}

- (void).cxx_destruct;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_initWithSource:(id)arg1;
- (void)_performEditWithStateTransformation:(id /* block */)arg1 containerEdit:(id /* block */)arg2;
- (id)_visibleState;
- (void)deleteContentsObjectAtIndex:(unsigned long long)arg1;
- (void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

@end
