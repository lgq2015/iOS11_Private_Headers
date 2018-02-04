/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingUndoStack : NSObject {
    NSMutableArray * _checkPointCommands;
    ICDrawingAttachmentController * _drawingController;
    ICDrawingUndoCheckPoint * _initialCheckPoint;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _redoStack;
    NSUndoManager * _undoManager;
    NSMutableArray * _undoStack;
}

@property (nonatomic, retain) NSMutableArray *checkPointCommands;
@property (nonatomic, readonly) ICDrawingAttachmentController *drawingController;
@property (nonatomic, retain) ICDrawingUndoCheckPoint *initialCheckPoint;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableArray *redoStack;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, retain) NSMutableArray *undoStack;
@property (nonatomic, readonly) unsigned long long undoStackDepth;

- (void).cxx_destruct;
- (void)addEraseUndoCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (void)applyCommandFromStack:(id)arg1 toStack:(id)arg2 completion:(id /* block */)arg3;
- (void)checkIfNewCheckPointIsNeeded;
- (id)checkPointCommands;
- (void)dealloc;
- (void)didAddCheckPoint;
- (void)didAddNewCommand:(id)arg1;
- (void)didRemoveCheckPoint;
- (void)didUndoOrRedo:(id)arg1;
- (id)drawingController;
- (id)findUndoCheckPointRenderCostOut:(double*)arg1 commandsAfterOut:(id*)arg2;
- (void)finishRedo:(id)arg1;
- (void)finishUndo:(id)arg1;
- (id)initWithDrawingController:(id)arg1;
- (id)initialCheckPoint;
- (id)operationQueue;
- (void)performRedo;
- (void)performUndo;
- (void)redo;
- (id)redoStack;
- (void)reset;
- (void)setCheckPointCommands:(id)arg1;
- (void)setInitialCheckPoint:(id)arg1;
- (void)setInitialImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 forCommands:(id)arg3;
- (void)setOperationQueue:(id)arg1;
- (void)setRedoStack:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUndoStack:(id)arg1;
- (void)undo;
- (id)undoManager;
- (void)undoManagerCommand:(id)arg1;
- (id)undoStack;
- (unsigned long long)undoStackDepth;

@end
