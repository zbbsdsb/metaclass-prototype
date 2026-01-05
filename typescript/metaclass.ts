export interface Metaclass {
  readonly type: string;
  describe(): Record<string, any>;
}

