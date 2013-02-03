/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MCMediaControlClientRemote, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface MCMediaControlReply : NSObject {
    MCMediaControlClientRemote *_client;
    id _completionBlock;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _replySent;
    NSObject<OS_dispatch_source> *_source;
}

@property(readonly) unsigned int receivePort;

- (void)_sendReplyWithDictionary:(id)arg1;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 picData:(id)arg2 playerGUID:(id)arg3;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 playbackInfo:(id)arg2;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 position:(float)arg2 duration:(float)arg3;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 volume:(float)arg2;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithClient:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (unsigned int)receivePort;

@end